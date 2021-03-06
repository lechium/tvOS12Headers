/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class NSArray;

@interface MPModelPlaylistEntryKind : MPModelKind {

	NSArray* _kinds;

}

@property (nonatomic,readonly) NSArray * kinds;              //@synthesize kinds=_kinds - In the implementation block
+(id)kindWithKinds:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)humanDescription;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(NSArray *)kinds;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

