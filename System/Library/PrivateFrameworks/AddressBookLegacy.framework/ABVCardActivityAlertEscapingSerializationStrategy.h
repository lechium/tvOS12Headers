/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABVCardActivityAlertAbstractSerializationStrategy.h>

@class NSString;

@interface ABVCardActivityAlertEscapingSerializationStrategy : NSObject <ABVCardActivityAlertAbstractSerializationStrategy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializeString:(id)arg1 ;
+(BOOL)strategyWouldAlterString:(id)arg1 ;
+(id)charactersToTriggerStrategy;
+(id)regex;
@end

