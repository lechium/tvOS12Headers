/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSString, NSDictionary;

@interface ACDKeychainItem : NSObject {

	NSMutableDictionary* _properties;
	NSMutableSet* _dirtyProperties;
	const CFDataRef _persistentRef;

}

@property (nonatomic,readonly) const CFDataRef persistentRef;                     //@synthesize persistentRef=_persistentRef - In the implementation block
@property (nonatomic,copy) NSString * account; 
@property (nonatomic,copy) NSString * service; 
@property (nonatomic,copy) NSString * accessGroup; 
@property (nonatomic,copy) NSString * accessibility; 
@property (assign,nonatomic) BOOL synchronizable; 
@property (nonatomic,readonly) SecAccessControlRef accessControlRef; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (assign,nonatomic) long long version; 
+(id)new;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(NSString *)accessibility;
-(id)initWithPersistentRef:(const CFDataRef)arg1 properties:(id)arg2 ;
-(void)_clearDirtyProperties;
-(id)_modifiedProperties;
-(id)_metadataWithError:(id*)arg1 ;
-(BOOL)_setMetadata:(id)arg1 withError:(id*)arg2 ;
-(void)_markPropertyDirty:(id)arg1 ;
-(id)initWithPersistentRef:(const CFDataRef)arg1 ;
-(SecAccessControlRef)accessControlRef;
-(const CFDataRef)persistentRef;
-(void)setAccessGroup:(NSString *)arg1 ;
-(NSString *)accessGroup;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(void)setSynchronizable:(BOOL)arg1 ;
-(BOOL)synchronizable;
-(id)init;
-(void)dealloc;
-(void)setAccessibility:(NSString *)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)save:(id*)arg1 ;
-(void)reload;
-(void)_reloadProperties;
@end

