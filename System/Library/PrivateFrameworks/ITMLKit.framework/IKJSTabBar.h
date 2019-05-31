/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSTabBar.h>

@protocol IKJSTabBar <JSExport>
@end

#import <libobjc.A.dylib/_IKJSTabBarProxy.h>

@class IKAppTabBar, NSArray, NSString;

@interface IKJSTabBar : IKJSObject <NSObject, IKJSTabBar, _IKJSTabBarProxy> {

	IKAppTabBar* _appTabBar;
	NSArray* _tabItems;

}

@property (retain) NSArray * tabItems;                                      //@synthesize tabItems=_tabItems - In the implementation block
@property (nonatomic,__weak,readonly) IKAppTabBar * appTabBar;              //@synthesize appTabBar=_appTabBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAppContext:(id)arg1 appTabBar:(id)arg2 ;
-(void)onSelect;
-(void)setTabs:(id)arg1 ;
-(id)tabs;
-(id)selectedTab;
-(void)setSelectedTab:(id)arg1 ;
-(IKAppTabBar *)appTabBar;
-(void)_onSelectSync;
-(NSArray *)tabItems;
-(void)_setSelectedTabNavigationDocumentOnJSContext:(id)arg1 ;
-(id)asPrivateIKJSTabBar;
-(id)transientTab;
-(void)setTabItems:(NSArray *)arg1 ;
@end

