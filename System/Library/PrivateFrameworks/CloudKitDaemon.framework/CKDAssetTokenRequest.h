/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet;

@interface CKDAssetTokenRequest : NSObject {

	unsigned _size;
	unsigned _sizeUpperBound;
	NSMutableArray* _assetBatches;
	NSMutableSet* _failedAssetBatches;

}

@property (nonatomic,retain) NSMutableArray * assetBatches;                  //@synthesize assetBatches=_assetBatches - In the implementation block
@property (nonatomic,retain) NSMutableSet * failedAssetBatches;              //@synthesize failedAssetBatches=_failedAssetBatches - In the implementation block
@property (assign,nonatomic) unsigned sizeUpperBound;                        //@synthesize sizeUpperBound=_sizeUpperBound - In the implementation block
@property (assign,nonatomic) unsigned size;                                  //@synthesize size=_size - In the implementation block
-(unsigned)sizeUpperBound;
-(id)CKPropertiesDescription;
-(NSMutableArray *)assetBatches;
-(NSMutableSet *)failedAssetBatches;
-(void)addAssetBatch:(id)arg1 ;
-(void)addFailedBatch:(id)arg1 ;
-(BOOL)hasSuccessfulBatches;
-(id)successfulBatches;
-(void)setAssetBatches:(NSMutableArray *)arg1 ;
-(void)setFailedAssetBatches:(NSMutableSet *)arg1 ;
-(void)setSizeUpperBound:(unsigned)arg1 ;
-(unsigned)size;
-(id)init;
-(id)description;
-(void)setSize:(unsigned)arg1 ;
-(BOOL)isEmpty;
@end

