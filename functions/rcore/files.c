#include "raylib.h"

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1200;
    const int screenHeight = 650;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);
    //--------------------------------------------------------------------------------------

    // bool FileExists(const char *fileName);                      // Check if file exists
    int hasFile = FileExists("../../resources/texts/teste.txt");
    // bool DirectoryExists(const char *dirPath);                  // Check if a directory path exists
    int hasFolder = DirectoryExists("../../resources/texts");
    // bool IsFileExtension(const char *fileName, const char *ext); // Check file extension (including point: .png, .wav)
    int hasFileExtension = IsFileExtension("../../resources/texts/teste.txt", ".txt");
    // int GetFileLength(const char *fileName);                    // Get file length in bytes (NOTE: GetFileSize() conflicts with windows.h)
    int fileLength = GetFileLength("../../resources/texts/teste.txt");
    // const char *GetFileExtension(const char *fileName);         // Get pointer to extension for a filename string (includes dot: '.png')
    const char *fileExtension = GetFileExtension("../../resources/texts/teste.txt");
    // const char *GetFileName(const char *filePath);              // Get pointer to filename for a path string
    const char *fileName = GetFileName("../../resources/texts/teste.txt");
    // const char *GetFileNameWithoutExt(const char *filePath);    // Get filename string without extension (uses static string)
    const char *fileNameWithoutExt = GetFileNameWithoutExt("../../resources/texts/teste.txt");
    // const char *GetDirectoryPath(const char *filePath);         // Get full path for a given fileName with path (uses static string)
    const char *directoryPath = GetDirectoryPath("../../resources/texts/teste.txt");
    // const char *GetPrevDirectoryPath(const char *dirPath);      // Get previous directory path for a given path (uses static string)
    const char *prevDirectoryPath = GetPrevDirectoryPath("../../resources/texts/teste.txt");
    // const char *GetWorkingDirectory(void);                      // Get current working directory (uses static string)
    const char *workingDirectory = GetWorkingDirectory();
    // const char *GetApplicationDirectory(void);                  // Get the directory of the running application (uses static string)
    const char *applicationDirectory = GetApplicationDirectory();

    // bool IsPathFile(const char *path);                          // Check if a given path is a file or a directory
    // FilePathList LoadDirectoryFiles(const char *dirPath);       // Load directory filepaths
    // FilePathList LoadDirectoryFilesEx(const char *basePath, const char *filter, bool scanSubdirs); // Load directory filepaths with extension filtering and recursive directory scan
    // void UnloadDirectoryFiles(FilePathList files);              // Unload filepaths
    // bool IsFileDropped(void);                                   // Check if a file has been dropped into window
    // FilePathList LoadDroppedFiles(void);                        // Load dropped filepaths
    // void UnloadDroppedFiles(FilePathList files);                // Unload dropped filepaths
    // long GetFileModTime(const char *fileName);                  // Get file modification time (last write time)


    // Main game loop
    while (!WindowShouldClose())
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
            ClearBackground(RAYWHITE);

            int line = 1;
            DrawText(TextFormat("%s", hasFile ? "Arquivo existe" : "Arquivo NÃO existe"), 20, line++ * 20, 20, BLACK);
            DrawText(TextFormat("%s", hasFolder ? "Diretorio existe" : "Diretorio NÃO existe"), 20, line++ * 20, 20, BLACK);
            DrawText(TextFormat("%s", hasFileExtension ? "Arquivo checado" : "Arquivo NÃO checado"), 20, line++ * 20, 20, BLACK);
            DrawText(TextFormat("tamanho do arquivo: %d", fileLength), 20, line++ * 20, 20, BLACK);
            DrawText(TextFormat("extensao do arquivo: %s", fileExtension), 20, line++ * 20, 20, BLACK);
            DrawText(TextFormat("Nome dos arquivo: %s", fileName), 20, line++ * 20, 20, BLACK);
            DrawText(TextFormat("Nome dos arquivo sem EXT: %s", fileNameWithoutExt), 20, line++ * 20, 20, BLACK);
            DrawText(TextFormat("caminho do diretorio: %s", directoryPath), 20, line++ * 20, 20, BLACK);
            DrawText(TextFormat("caminho do diretorio PREV: %s", prevDirectoryPath), 20, line++ * 20, 20, BLACK);
            DrawText(TextFormat("Diretório de trabalho: %s", workingDirectory), 20, line++ * 20, 20, BLACK);
            DrawText(TextFormat("Diretório de aplicação: %s", applicationDirectory), 20, line++ * 20, 20, BLACK);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();
    //--------------------------------------------------------------------------------------

    return 0;
}