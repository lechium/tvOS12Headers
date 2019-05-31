/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@interface MTLIOAccelDeviceShmemPool : NSObject {

	MTLIOAccelDeviceShmemPoolPrivate* _priv;

}
-(unsigned)shmemSize;
-(int)availableCount;
-(id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 shmemSize:(unsigned)arg3 options:(id)arg4 ;
-(void)setShmemSize:(unsigned)arg1 ;
-(void)prune;
-(void)dealloc;
-(void)purge;
@end

