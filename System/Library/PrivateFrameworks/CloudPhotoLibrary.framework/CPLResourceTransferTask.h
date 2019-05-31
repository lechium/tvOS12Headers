/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPLResource, NSString;

@interface CPLResourceTransferTask : NSObject <NSSecureCoding> {

	BOOL _highPriority;
	BOOL _cancelled;
	CPLResource* _resource;
	NSString* _taskIdentifier;

}

@property (nonatomic,copy) NSString * taskIdentifier;                              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,retain) CPLResource * resource;                               //@synthesize resource=_resource - In the implementation block
@property (assign,getter=isHighPriority,nonatomic) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;                  //@synthesize cancelled=_cancelled - In the implementation block
+(BOOL)supportsSecureCoding;
-(Class)classForKeyedArchiver;
-(void)launch;
-(NSString *)taskIdentifier;
-(CPLResource *)resource;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(BOOL)isHighPriority;
-(void)setResource:(CPLResource *)arg1 ;
-(void)setHighPriority:(BOOL)arg1 ;
-(void)cancelTask;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isCancelled;
-(Class)classForCoder;
@end

