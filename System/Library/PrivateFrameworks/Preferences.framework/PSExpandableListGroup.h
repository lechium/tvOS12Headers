/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class PSListController, NSString, NSMutableArray, PSSpecifier;

@interface PSExpandableListGroup : NSObject <PSSpecifierGroup> {

	PSListController* _listController;
	NSString* _groupSpecifierID;
	long long _collaspeAfterCount;
	NSMutableArray* _specifiers;
	BOOL _showAll;
	PSSpecifier* _showAllSpecifier;
	PSSpecifier* _spinnerSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)reloadSpecifiers;
-(long long)_groupIndex;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(id)spinnerSpecifier;
-(id)initWithListController:(id)arg1 groupSpecifierID:(id)arg2 collapseAfterCount:(long long)arg3 ;
-(id)showAllSpecifier;
-(void)showAll;
-(void)addSpecifiers:(id)arg1 ;
-(void)removeAllSpecifiers;
@end

