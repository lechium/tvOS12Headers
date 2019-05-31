/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNPropertyCellDelegate <NSObject>
@optional
-(id)sharedActionsDataSource;

@required
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
-(void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3;
-(void)propertyCellDidChangeLayout:(id)arg1;
-(id)storeForPropertyCell:(id)arg1;
-(id)defaultValueForPropertyCell:(id)arg1;

@end
