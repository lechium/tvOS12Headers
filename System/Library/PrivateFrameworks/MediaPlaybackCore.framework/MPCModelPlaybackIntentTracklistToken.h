/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPModelRequest, MPIdentifierSet;

@interface MPCModelPlaybackIntentTracklistToken : NSObject <NSSecureCoding> {

	MPModelRequest* _request;
	MPIdentifierSet* _startItemIdentifiers;

}

@property (nonatomic,copy) MPModelRequest * request;                            //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) MPIdentifierSet * startItemIdentifiers;              //@synthesize startItemIdentifiers=_startItemIdentifiers - In the implementation block
+(id)requiredPropertiesForStaticMediaClips;
+(BOOL)supportsSecureCoding;
-(void)setRequest:(MPModelRequest *)arg1 ;
-(MPIdentifierSet *)startItemIdentifiers;
-(void)setStartItemIdentifiers:(MPIdentifierSet *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MPModelRequest *)request;
@end

