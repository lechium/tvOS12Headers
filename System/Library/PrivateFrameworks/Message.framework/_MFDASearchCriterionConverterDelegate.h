/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMessageCriterionConverterDelegate.h>

@class NSString;

@interface _MFDASearchCriterionConverterDelegate : NSObject <MFMessageCriterionConverterDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)messageCriterionConverter:(id)arg1 willUsePredicateOperatorType:(unsigned long long)arg2 forKey:(id)arg3 ;
-(id)messageCriterionConverter:(id)arg1 predicateKeysForCriterionType:(long long)arg2 ;
-(BOOL)_shouldConvertEqualsToContainsForKey:(id)arg1 ;
@end

