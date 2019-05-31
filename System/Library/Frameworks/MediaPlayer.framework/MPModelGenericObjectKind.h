/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelKind.h>

@class NSDictionary;

@interface MPModelGenericObjectKind : MPModelKind {

	NSDictionary* _relationshipKinds;

}

@property (nonatomic,readonly) NSDictionary * relationshipKinds;              //@synthesize relationshipKinds=_relationshipKinds - In the implementation block
+(id)kindWithRelationshipKinds:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)humanDescription;
-(NSDictionary *)relationshipKinds;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
