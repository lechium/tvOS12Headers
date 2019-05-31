/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BYCapabilities : NSObject
+(id)sharedCapabilities;
-(BOOL)supportsPearl;
-(BOOL)mgHasSiriCapability;
-(id)_paymentScreenRequirements;
-(BOOL)_paymentScreenRequirementsIncludePasscode:(id)arg1 ;
-(BOOL)canShowPasscodeScreen;
-(BOOL)_paymentScreenRequirementsIncludeiCloud:(id)arg1 ;
-(BOOL)canShowAppleIDScreen;
-(BOOL)mgHasSecureElement;
-(BOOL)mgHasMesa;
-(BOOL)isPearlEnrolled;
-(BOOL)canShowSiriScreen;
-(BOOL)canShowPaymentScreen;
-(BOOL)canShowTouchIDScreen;
-(BOOL)canShowFaceIDScreen;
-(BOOL)mgHasCellularTelephony;
-(BOOL)mgHasGreenTea;
@end
