/*
 * $XConsortium: SmeMenuButton.h,v 1.5 89/12/11 15:20:14 kit Exp $
 *
 * Copyright 1989 Massachusetts Institute of Technology
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of M.I.T. not be used in advertising or
 * publicity pertaining to distribution of the software without specific,
 * written prior permission.  M.I.T. makes no representations about the
 * suitability of this software for any purpose.  It is provided "as is"
 * without express or implied warranty.
 *
 * M.I.T. DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING ALL
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL M.I.T.
 * BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN 
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * SmeMenuButton.h - Public Header file for SmeMenuButton object.
 *
 * This is the public header file for the Athena BSB Sme object.
 * It is intended to be used with the simple menu widget.  This object
 * provides bitmap - string - bitmap style entries.
 *
 * Date:    April 3, 1989
 *
 * By:      Chris D. Peterson
 *          MIT X Consortium 
 *          kit@expo.lcs.mit.edu
 *
 * Modifications for Wine
 *
 * 8/23/93  David Metcalfe (david@prism.demon.co.uk)
 *          Added code to translate ampersand to underlined char
 */

#ifndef _SmeMenuButto_h
#define _SmeMenuButto_h

#include <X11/Xmu/Converters.h>

#include <X11/Xaw/Sme.h>

/****************************************************************
 *
 * SmeMenuButton object
 *
 ****************************************************************/

/* BSB Menu Entry Resources:

 Name		     Class		RepType		Default Value
 ----		     -----		-------		-------------
 callback            Callback           Callback        NULL
 destroyCallback     Callback		Pointer		NULL
 font                Font               XFontStruct *   XtDefaultFont
 foreground          Foreground         Pixel           XtDefaultForeground
 height		     Height		Dimension	0
 label               Label              String          Name of entry
 leftBitmap          LeftBitmap         Pixmap          None
 leftMargin          HorizontalMargins  Dimension       4
 rightBitmap         RightBitmap        Pixmap          None
 rightMargin         HorizontalMargins  Dimension       4
 sensitive	     Sensitive		Boolean		True
 vertSpace           VertSpace          int             25
 width		     Width		Dimension	0
 x		     Position		Position	0n
 y		     Position		Position	0
 menuName            MenuName           String          "menu"
 inactive	     Inactive		Boolean		False

*/

typedef struct _SmeMenuButtonClassRec    *SmeMenuButtonObjectClass;
typedef struct _SmeMenuButtonRec         *SmeMenuButtonObject;

extern WidgetClass smeMenuButtonObjectClass;

#define XtNleftBitmap "leftBitmap"
#define XtNleftMargin "leftMargin"
#define XtNrightBitmap "rightBitmap"
#define XtNrightMargin "rightMargin"
#define XtNvertSpace   "vertSpace"
#define XtNmenuName "menuName"
#define XtNinactive "inactive"

#define XtCLeftBitmap "LeftBitmap"
#define XtCHorizontalMargins "HorizontalMargins"
#define XtCRightBitmap "RightBitmap"
#define XtCVertSpace   "VertSpace"
#define XtCMenuName "MenuName"
#define XtCInactive "Inactive"

#endif /* _SmeMenuButto_h */
