/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACMUIControllerDelegate <NSObject>
@optional
-(void)onManageAppleIDForRealm:(id)arg1;
-(void)uiControllerOnSignIn:(id)arg1 withPassword:(id)arg2;
-(void)uiControllerOnSignInCancel:(id)arg1;
-(void)uiControllerOnSignIForgot:(id)arg1;
-(void)uiControllerWillEnableSignInDialog:(id)arg1;
-(void)uiControllerDidEnableSignInDialog:(id)arg1;
-(void)uiControllerWillDisableSignInDialog:(id)arg1;
-(void)uiControllerDidDisableSignInDialog:(id)arg1;
-(void)uiControllerOnLogOut:(id)arg1;
-(unsigned long long)uiControllerSignInDialogContentStyle:(id)arg1;
-(id)uiControllerManagerApprovalDialogSummaryView:(id)arg1;

@end

