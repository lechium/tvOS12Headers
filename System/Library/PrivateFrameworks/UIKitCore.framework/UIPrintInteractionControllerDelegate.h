/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPrintInteractionControllerDelegate <NSObject>
@optional
-(void)printInteractionControllerWillPresentPrinterOptions:(id)arg1;
-(void)printInteractionControllerDidPresentPrinterOptions:(id)arg1;
-(void)printInteractionControllerWillDismissPrinterOptions:(id)arg1;
-(void)printInteractionControllerDidDismissPrinterOptions:(id)arg1;
-(id)printInteractionControllerParentViewController:(id)arg1;
-(void)printInteractionControllerWillStartJob:(id)arg1;
-(void)printInteractionControllerDidFinishJob:(id)arg1;
-(long long)printInteractionController:(id)arg1 chooseCutterBehavior:(id)arg2;
-(double)printInteractionController:(id)arg1 cutLengthForPaper:(id)arg2;
-(id)printInteractionController:(id)arg1 choosePaper:(id)arg2;

@end

