#include "Testy jezykowe.h"

#include <QtGui/QLabel>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QAction>

Testy_jezykowe::Testy_jezykowe()
{
    QLabel* label = new QLabel( this );
    label->setText( "Hello World!" );
    setCentralWidget( label );
    QAction* action = new QAction(this);
    action->setText( "Quit" );
    connect(action, SIGNAL(triggered()), SLOT(close()) );
    menuBar()->addMenu( "File" )->addAction( action );
}

Testy_jezykowe::~Testy_jezykowe()
{}

#include "Testy jezykowe.moc"
