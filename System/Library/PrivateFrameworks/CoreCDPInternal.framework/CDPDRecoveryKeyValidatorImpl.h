/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPRecoveryKeyValidatorInternal.h>

@protocol CDPDRecoveryKeyValidatorInternalDelegate;
@class CDPContext, NSString;

@interface CDPDRecoveryKeyValidatorImpl : NSObject <CDPRecoveryKeyValidatorInternal> {

	CDPContext* _context;
	id<CDPDRecoveryKeyValidatorInternalDelegate> _delegate;
	BOOL _recoveryKeyVerified;
	NSString* _recoveryKey;

}

@property (assign,nonatomic) BOOL recoveryKeyVerified;              //@synthesize recoveryKeyVerified=_recoveryKeyVerified - In the implementation block
@property (nonatomic,copy) NSString * recoveryKey;                  //@synthesize recoveryKey=_recoveryKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)confirmRecoveryKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateRecoveryKey:(/*^block*/id)arg1 ;
-(BOOL)recoveryKeyVerified;
-(void)setRecoveryKeyVerified:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(void)setRecoveryKey:(NSString *)arg1 ;
-(NSString *)recoveryKey;
@end

