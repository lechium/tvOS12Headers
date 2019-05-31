/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSItemProvider, NSUUID, NSProgress, NSString;

@interface _UIDataTransferRequest : NSObject <NSProgressReporting> {

	NSItemProvider* _itemProvider;
	NSUUID* _UUID;
	NSProgress* _progress;

}

@property (nonatomic,retain) NSItemProvider * itemProvider;              //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,retain) NSUUID * UUID;                              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                      //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)UUID;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSProgress *)progress;
-(NSItemProvider *)itemProvider;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
@end

