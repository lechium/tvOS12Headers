/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface CALayerArray : NSArray {

	CALayerArrayIvars* _ivars;

}
-(void)getObjects:(id*)arg1 ;
-(id)initWithLayers:(id*)arg1 count:(unsigned long long)arg2 retain:(BOOL)arg3 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CA24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
@end

