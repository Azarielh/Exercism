# challenge-crystal


## Lancer le projet dans un GitHub Codespace

Pour lancer le projet dans un GitHub Codespace, cliquez sur le bouton **Code > Open with Codespaces** depuis la page du projet.

## Configuration de l'environnement

### 1. Connection à Exercism

Vous trouverez votre TOKEN dans votre profil Exercism: **Profile > Settings > API/CLI**

Ensuite vous pouvez configurer votre connexion à Exercism avec la commande suivante:
```bash
exercism configure --token=VOTRE_TOKEN
```

### 2. Configuration du répertoire de travail

On doit ensuite dire à Exercism où il doit enregistrer les exercices. Pour cela, on utilise la commande suivante:

```bash
exercism configure -w /workspaces/challenge-crystal/exercices/
```

### 3. Récupération des exercices

Pour récupérer les exercices, on utilise la commande suivante:

```bash
exercism download --exercise=hello-world --track=crystal
```

Vous pouvez trouver la commande pré-faite sur le bouton **Open in editor > Download and work locally**

## Tester et rendre les exercices

Après avoir récupéré un exercice, rendez-vous dans le répertoire de l'exercice:

```bash
cd exercices/crystal/<nom-de-l-exercice>
```

Puis lancez les tests avec la commande suivante:

```bash
exercism test
```

Une fois que vous avez terminé l'exercice, vous pouvez le rendre avec la commande suivante:

```bash
exercism submit
```

> **Note**: Je vous invite aussi à Git commit et push votre code après chaque exercice.
