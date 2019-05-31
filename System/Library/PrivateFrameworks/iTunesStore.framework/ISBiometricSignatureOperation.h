/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISBiometricStore, SSBiometricAuthenticationContext, ISDialog, ISTouchIDDialog;

@interface ISBiometricSignatureOperation : ISOperation {

	/*^block*/id _outputBlock;
	ISBiometricStore* _biometricStore;
	SSBiometricAuthenticationContext* _context;
	ISDialog* _fallbackDialog;
	ISTouchIDDialog* _touchIDDialog;

}

@property (nonatomic,retain) ISBiometricStore * biometricStore;              //@synthesize biometricStore=_biometricStore - In the implementation block
@property (retain) SSBiometricAuthenticationContext * context;               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) ISDialog * fallbackDialog;                      //@synthesize fallbackDialog=_fallbackDialog - In the implementation block
@property (nonatomic,retain) ISTouchIDDialog * touchIDDialog;                //@synthesize touchIDDialog=_touchIDDialog - In the implementation block
@property (copy) id outputBlock;                                             //@synthesize outputBlock=_outputBlock - In the implementation block
-(id)outputBlock;
-(ISDialog *)fallbackDialog;
-(id)initWithBiometricAuthenticationContext:(id)arg1 touchIDDialog:(id)arg2 fallbackDialog:(id)arg3 ;
-(BOOL)_promptUserToAuthenticateForIdentityMapChangeWithAccountIdentifier:(id)arg1 accountName:(id)arg2 ;
-(ISBiometricStore *)biometricStore;
-(void)setBiometricStore:(ISBiometricStore *)arg1 ;
-(void)setFallbackDialog:(ISDialog *)arg1 ;
-(ISTouchIDDialog *)touchIDDialog;
-(void)setTouchIDDialog:(ISTouchIDDialog *)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(void)setContext:(SSBiometricAuthenticationContext *)arg1 ;
-(SSBiometricAuthenticationContext *)context;
-(void)run;
@end

