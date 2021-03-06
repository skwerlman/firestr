/*
 * Copyright (C) 2014  Maxim Noah Khailo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders give 
 * permission to link the code of portions of this program with the 
 * Botan library under certain conditions as described in each 
 * individual source file, and distribute linked combinations 
 * including the two.
 *
 * You must obey the GNU General Public License in all respects for 
 * all of the code used other than Botan. If you modify file(s) with 
 * this exception, you may extend this exception to your version of the 
 * file(s), but you are not obligated to do so. If you do not wish to do 
 * so, delete this exception statement from your version. If you delete 
 * this exception statement from all source files in the program, then 
 * also delete it here.
 */

#ifndef FIRESTR_GUI_UTIL_H
#define FIRESTR_GUI_UTIL_H

#include <QString>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QDialog>
#include "user/user.hpp"

namespace fire
{
    namespace gui
    {
        void setup_gui();
        std::string convert(const QString&);
        const unsigned short* convert16(const QString&);
        std::string app_id(const user::local_user& l);
        std::string get_file_name(QWidget* root);
        bool load_from_file(const std::string& f, fire::util::bytes& data);


        //set color styles for icon buttons
        void make_green(QLabel&);
        void make_green(QPushButton&);
        void make_red(QPushButton&);
        void make_red(QLabel&);
        void make_grey(QPushButton&);
        void make_grey(QPushButton&);
        void make_black(QPushButton&);
        void make_black(QLabel&);
        
        //create various icon buttons
        QPushButton* make_x_button();
        void make_x(QPushButton&);
        void make_plus(QPushButton&);
        void make_minimize(QPushButton&);
        void make_maximize(QPushButton&);
        void make_install(QPushButton&);
        void make_reply(QPushButton&);
        void make_save(QPushButton&);
        void make_export(QPushButton&);
        void make_add_contact_small(QPushButton&);
        void make_add_contact(QPushButton&);
        void make_big_add_contact(QPushButton&);
        void make_big_email(QPushButton&);
        void make_big_identity(QPushButton&);
        void make_cancel(QPushButton&);
        void make_ok(QPushButton&);
        void make_add_to_list(QPushButton&);
        void make_introduce(QPushButton&);
        void make_new_conversation(QPushButton&);
        void make_new_conversation_small(QPushButton&);
        void make_big_new_conversation(QPushButton&);

        void make_progress_0(QLabel&);
        void make_progress_1(QLabel&);
        void make_progress_2(QLabel&);
        void make_progress_3(QLabel&);
        void make_error(QLabel&);
        void make_thumbs_up(QLabel&);
        void make_next(QPushButton&);
        void enable_icon_button(QPushButton& b, bool enabled);

        namespace app
        {
            class app;
            class app_service;
        }
        bool install_app_gui(app::app& a, app::app_service& s, QWidget* w);

        std::string color_to_stylesheet(const QColor c);
        std::string color_to_stylesheet_2(const QColor c);
        std::string background_color_to_stylesheet(const QColor c);

        class assert_dialog : public QDialog
        {
            Q_OBJECT
            public:
                assert_dialog(const char* msg, QWidget* parent = nullptr);
        };
    }
}

#endif
