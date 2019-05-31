/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OFKeychainGenericAccount : NSObject {

	NSMutableDictionary* _keychainData;
	NSMutableDictionary* _keychainQuery;

}

@property (retain) NSMutableDictionary * keychainData;               //@synthesize keychainData=_keychainData - In the implementation block
@property (retain) NSMutableDictionary * keychainQuery;              //@synthesize keychainQuery=_keychainQuery - In the implementation block
+(id)accountWithService:(id)arg1 account:(id)arg2 andAccessGroup:(id)arg3 ;
-(id)service;
-(id)accessGroup;
-(id)secItemFormatToDictionary:(id)arg1 ;
-(void)writeToKeychain;
-(id)dictionaryToSecItemFormat:(id)arg1 ;
-(void)setKeychainQuery:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)keychainQuery;
-(void)setKeychainData:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)keychainData;
-(BOOL)deleteFromKeychain;
-(id)initWithService:(id)arg1 account:(id)arg2 andAccessGroup:(id)arg3 ;
-(id)account;
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(BOOL)isValid;
-(id)password;
@end

