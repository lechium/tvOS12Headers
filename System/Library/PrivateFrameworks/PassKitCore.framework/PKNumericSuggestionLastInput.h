/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSDecimalNumber;

@interface PKNumericSuggestionLastInput : NSObject {

	NSString* _serialNumber;
	NSMutableDictionary* _passLastInputDictionary;

}

@property (nonatomic,copy) NSDecimalNumber * value; 
@property (assign,nonatomic) BOOL wentToMax; 
-(void)save;
-(id)initWithPassSerialNumber:(id)arg1 ;
-(BOOL)wentToMax;
-(void)setWentToMax:(BOOL)arg1 ;
-(id)init;
-(NSDecimalNumber *)value;
-(void)setValue:(NSDecimalNumber *)arg1 ;
@end

