/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, BLRepairLayerStack, NSLock;

@interface BLRepairModel : NSObject {

	NSDictionary* _strokesDataDictionary;
	BLRepairLayerStack* _layerStack;
	NSLock* _lock;

}
-(id)initWithAdjustmentsDictionary:(id)arg1 ;
-(BOOL)hasRedeye;
-(BOOL)hasRepairOrRedeye;
-(BOOL)hasRepair;
-(BOOL)hasLayerStack;
-(void)buildLayerStackWithAnalysisImage:(id)arg1 andRepairImage:(id)arg2 ;
-(id)imagePatchList;
-(void)setLayerStack:(id)arg1 ;
-(id)layerStack;
@end
