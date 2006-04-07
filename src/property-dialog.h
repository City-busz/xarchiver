/*
 *  Copyright (c) 2006 Stephan Arts <stephan.arts@hva.nl>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __XARCHIVER_PROPERTY_DIALOG_H__
#define __XARCHIVER_PROPERTY_DIALOG_H__

G_BEGIN_DECLS

#define XA_PROPERTY_DIALOG(obj)             ( \
		G_TYPE_CHECK_INSTANCE_CAST ((obj),        \
			xa_property_dialog_get_type(),          \
			XAPropertyDialog))

#define XA_PROPERTY_DIALOG_CLASS(_class)    ( \
		G_TYPE_CHECK_CLASS_CAST ((_class),        \
			xa_property_dialog_get_type(),          \
			XAPropertyDialogClass))

#define IS_XA_PROPERTY_DIALOG(obj)   ( \
		G_TYPE_CHECK_INSTANCE_TYPE ((obj),        \
			xa_property_dialog_get_type()))

#define IS_XA_PROPERTY_DIALOG_CLASS(_class) ( \
		G_TYPE_CHECK_CLASS_TYPE ((_class),        \
			xa_property_dialog_get_type()))


typedef struct _XAPropertyDialog      XAPropertyDialog;
typedef struct _XAPropertyDialogClass XAPropertyDialogClass;

struct _XAPropertyDialog
{
	GtkDialog dialog;
};

struct _XAPropertyDialogClass
{
	GtkDialogClass parent_class;
};

GType          xa_property_dialog_get_type              (void);
GtkWidget*     xa_property_dialog_new                   (void);
void           xa_property_dialog_add_property          (gchar *name, gchar *value);

G_END_DECLS

#endif