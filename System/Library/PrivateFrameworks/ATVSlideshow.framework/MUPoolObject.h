/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@interface MUPoolObject : NSObject {

	MUPoolObject* mPoolPrev;

}
+(SCD_Struct_MR15*)poolInfo;
+(void)clearAllPools;
+(BOOL)clearVars;
+(id)pooledClasses;
+(long long)clearPool;
+(id)allocWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(void)purge;
@end
