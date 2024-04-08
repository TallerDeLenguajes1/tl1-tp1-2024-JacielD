# tl1-tp1-2024-JacielD

## Gitignore

**Que es?**

con este comando puedes ordenarle a Git que ignore el archivo normalmente los archivos que decidimos ignorar son artefactos de compilacion y archivos generados por la pc entre otros como

- Caches de dependencias
- archivos generados en tiempo de ejecucion
- archivos ocultos del sistema, etc

para ignorar un archivo debes abrir git bash en tu repositorio local y el ta tabla de comandos escribir:

_touch .gitignore_

Si quieres ignorar un archivo que ya se haya ingresado, deberás dejar de rastrearlo antes de que agregues una regla para ignorarlo. Desde tu terminal, deja de rastrear el archivo

_git rm --cached FILENAME_
