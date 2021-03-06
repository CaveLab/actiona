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

#ifndef SETTINGSKEYEDIT_H
#define SETTINGSKEYEDIT_H

#include <QLineEdit>

class SettingsKeyEdit : public QLineEdit
{
	Q_OBJECT

public:
	explicit SettingsKeyEdit(QWidget *parent = 0);

	QKeySequence	keySequence() const								{return mKeySequence;}
	void			setKeySequence(QKeySequence keySequence);

protected:
	void keyPressEvent(QKeyEvent *event);

private:
	QKeySequence mKeySequence;

	Q_DISABLE_COPY(SettingsKeyEdit)
};

#endif // SETTINGSKEYEDIT_H
