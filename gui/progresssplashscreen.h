/*
	Actiona
	Copyright (C) 2005-2016 Jonathan Mercier-Ganady

	Actiona is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	Actiona is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program. If not, see <http://www.gnu.org/licenses/>.

	Contact : jmgr@jmgr.info
*/

#ifndef PROGRESSSPLASHSCREEN_H
#define PROGRESSSPLASHSCREEN_H

#include <QSplashScreen>

class QProgressBar;
class QTimer;

class ProgressSplashScreen : public QSplashScreen
{
	Q_OBJECT

public:
	ProgressSplashScreen(const QPixmap &pixmap = QPixmap(), Qt::WindowFlags f=0);
	ProgressSplashScreen(QWidget *parent, const QPixmap &pixmap = QPixmap(), Qt::WindowFlags f=0);

	void setMaximum(int maximum);
	void setMinimum(int minimum);
	void setRange(int minimum, int maximum);
	void setValue(int value);
	void fadeOut();

protected:
	void drawContents(QPainter *painter);

private slots:
	void messageChanged(const QString &message);
	void opacityCloseUpdate();

private:
	void init();

	QProgressBar *mProgressBar;
	float mOpacity;
	QTimer *mOpacityTimer;
};

#endif // PROGRESSSPLASHSCREEN_H
