/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRotatingAlertController.h>

@class UIWebDocumentView;

@interface UIWebRotatingAlertController : _UIRotatingAlertController {

	BOOL _wasDeferringCallbacks;
	UIWebDocumentView* _webBrowserView;

}
-(void)dealloc;
-(BOOL)presentSheet;
-(void)doneWithSheet;
-(id)initWithUIWebDocumentView:(id)arg1 ;
-(void)_enableWebView;
-(void)_disableWebView;
@end

