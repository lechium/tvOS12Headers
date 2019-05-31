/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ITAPropertyDelta : NSObject {

	BOOL _accountProperty;
	NSString* _accountIdentifier;
	NSString* _key;
	id _oldValue;
	id _value;

}

@property (nonatomic,copy,readonly) NSString * accountIdentifier;                          //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (getter=isAccountProperty,nonatomic,readonly) BOOL accountProperty;              //@synthesize accountProperty=_accountProperty - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) id oldValue;                                                //@synthesize oldValue=_oldValue - In the implementation block
@property (nonatomic,readonly) id value;                                                   //@synthesize value=_value - In the implementation block
+(id)propertyDeltasForAccount:(id)arg1 oldAccount:(id)arg2 ;
-(id)oldValue;
-(id)_initWithAccountIdentifier:(id)arg1 key:(id)arg2 value:(id)arg3 oldValue:(id)arg4 isAccountProperty:(BOOL)arg5 ;
-(BOOL)isAccountProperty;
-(NSString *)accountIdentifier;
-(id)value;
-(NSString *)key;
@end

