/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNInstantMessageAddress;

@interface CNPropertyGroupInstantMessageItem : CNPropertyGroupItem

@property (nonatomic,readonly) CNInstantMessageAddress * imAddress; 
+(id)emptyValueForLabel:(id)arg1 ;
-(id)defaultActionURL;
-(id)displayLabel;
-(id)editingStringValue;
-(id)displayStringForValue:(id)arg1 ;
-(BOOL)isEquivalentToItem:(id)arg1 ;
-(CNInstantMessageAddress *)imAddress;
-(id)valueForDisplayString:(id)arg1 ;
@end

