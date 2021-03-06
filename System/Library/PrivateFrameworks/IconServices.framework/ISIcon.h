/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSString, ISIconManager;

@interface ISIcon : NSObject <CALayerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) ISIconManager * manager; 
+(unsigned long long)deviceIdiom;
+(id)applicationIcon;
+(id)layerUpdateQueue;
+(LIIconVariantInfo*)variantInfoForSet:(unsigned long long)arg1 count:(unsigned long long*)arg2 ;
+(int)findVariantFromSet:(unsigned long long)arg1 deviceIdiom:(unsigned long long)arg2 size:(CGSize)arg3 scale:(double)arg4 ;
+(id)sizesFromSet:(unsigned long long)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)badgeOptions;
-(unsigned long long)variantOptions;
-(void)displayLayer:(id)arg1 ;
-(id)_init;
-(ISIconManager *)manager;
@end

