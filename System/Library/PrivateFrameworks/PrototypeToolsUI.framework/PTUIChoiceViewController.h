/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PTRowObserver.h>

@class NSIndexPath, PTChoiceRow, NSString;

@interface PTUIChoiceViewController : UITableViewController <PTRowObserver> {

	NSIndexPath* _valueIndexPath;
	PTChoiceRow* _row;

}

@property (nonatomic,retain) PTChoiceRow * row;                     //@synthesize row=_row - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRow:(PTChoiceRow *)arg1 ;
-(void)rowDidChangeValue:(id)arg1 ;
-(void)rowDidReload:(id)arg1 ;
-(void)_checkAppropriateCell;
-(id)initWithPresentingRow:(id)arg1 ;
-(void)dealloc;
-(PTChoiceRow *)row;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
@end

