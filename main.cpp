#include <QApplication>
#include "html5applicationviewer.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Html5ApplicationViewer viewer;
    viewer.resize(1024,768);
    viewer.setOrientation(Html5ApplicationViewer::ScreenOrientationAuto);
    viewer.showExpanded();
    viewer.loadUrl(QUrl(QLatin1String("https://objectedge.slack.com")));

    return app.exec();
}
