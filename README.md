```mermaid
%% =======================================================================
%%  HangMan — struktura katalogów i zależności klas (simplified overview)
%% =======================================================================

flowchart TD
    subgraph GUI ["GUI"]
        MainWindow["MainWindow<br/>(QMainWindow)"]
        DifficultyDialog["DifficultyDialog<br/>(QDialog)"]
        AddWordDialog["AddWordDialog<br/>(QDialog)"]
    end

    subgraph GameLogic ["GameLogic"]
        Game["Game<br/>(model stanu gry)"]
    end

    subgraph GameController ["GameController"]
        Controller["GameController<br/>(pośrednik GUI ↔ logika)"]
    end

    subgraph DataBase ["DataBase"]
        DBManager["DataBaseManager<br/>(singleton)"]
        hangmanDB["hangman.db<br/>(SQLite)"]
        loadScript["load_words.py"]
    end

    subgraph CSV ["CSV"]
        EasyCSV["easy.csv"]
        MediumCSV["medium.csv"]
        HardCSV["hard.csv"]
    end

    %% --- zależności ---
    MainWindow --> |sygnały / sloty| Controller
    DifficultyDialog --> |emituje poziom| Controller
    AddWordDialog --> |emituje nowe słowo| Controller

    Controller --> |korzysta z| Game
    Controller --> |zapytania SQL| DBManager

    DBManager --> |ładuje / zapisuje| hangmanDB
    loadScript --> |importuje słowa| hangmanDB

    hangmanDB <---> |źródło danych| EasyCSV & MediumCSV & HardCSV
