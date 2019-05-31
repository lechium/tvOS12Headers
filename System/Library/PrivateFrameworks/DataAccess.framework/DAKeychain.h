/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataAccess/DataAccess-Structs.h>
@interface DAKeychain : NSObject
+(id)sharedKeychain;
-(void)migratePasswordForAccount:(id)arg1 ;
-(int)_daKeychainAccessibilityForSecAccessibility:(void*)arg1 ;
-(BOOL)canAccessCredentialsWithAccessibility:(int)arg1 ;
-(void)removePersistentCredentials;
-(CFDictionaryRef)_DACopyMutableQueryForAccountWithPersistentUUID:(id)arg1 ;
-(void*)_secAccessibilityForDAKeychainAccessibility:(int)arg1 ;
-(CFDictionaryRef)_DACopyMutableAttributesForAccountWithPersistentUUID:(id)arg1 accessibility:(int)arg2 ;
-(BOOL)removePasswordForAccount:(id)arg1 withPersistentUUID:(id)arg2 ;
-(id)passwordForAccountWithPersistentUUID:(id)arg1 expectedAccessibility:(int)arg2 shouldSetAccessibility:(BOOL)arg3 passwordExpected:(BOOL)arg4 ;
-(id)guessPasswordForURL:(id)arg1 ;
-(void)removeKeychainInformationsForURL:(id)arg1 ;
-(BOOL)setPassword:(id)arg1 forAccount:(id)arg2 withPersistentUUID:(id)arg3 withAccessibility:(int)arg4 ;
-(id)loadKeychainInformationsForURL:(id)arg1 ;
-(BOOL)saveKeychainInformationsForURL:(id)arg1 andPassword:(id)arg2 withAccessibility:(int)arg3 ;
@end

