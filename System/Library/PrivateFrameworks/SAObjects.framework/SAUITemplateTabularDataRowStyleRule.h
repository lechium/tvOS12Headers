/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAUITemplateTabularDataRowStyleRule : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * minimumHeight; 
@property (nonatomic,copy) NSNumber * rowCount; 
@property (nonatomic,copy) NSNumber * rowStartIndex; 
@property (nonatomic,copy) NSNumber * showTopBorder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tabularDataRowStyleRule;
+(id)tabularDataRowStyleRuleWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)minimumHeight;
-(void)setMinimumHeight:(NSNumber *)arg1 ;
-(void)setRowCount:(NSNumber *)arg1 ;
-(NSNumber *)rowStartIndex;
-(void)setRowStartIndex:(NSNumber *)arg1 ;
-(NSNumber *)showTopBorder;
-(void)setShowTopBorder:(NSNumber *)arg1 ;
-(NSNumber *)rowCount;
@end
