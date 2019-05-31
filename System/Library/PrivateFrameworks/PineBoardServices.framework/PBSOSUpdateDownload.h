/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBSOSUpdateOperationProgress, PBSOSUpdateDescriptor;

@interface PBSOSUpdateDownload : NSObject <NSSecureCoding, NSCopying> {

	PBSOSUpdateOperationProgress* _progress;
	PBSOSUpdateDescriptor* _descriptor;

}

@property (nonatomic,retain) PBSOSUpdateDescriptor * descriptor;                   //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) PBSOSUpdateOperationProgress * progress;              //@synthesize progress=_progress - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)totalSpaceConsumed;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDescriptor:(PBSOSUpdateDescriptor *)arg1 ;
-(PBSOSUpdateDescriptor *)descriptor;
-(void)setProgress:(PBSOSUpdateOperationProgress *)arg1 ;
-(PBSOSUpdateOperationProgress *)progress;
@end
