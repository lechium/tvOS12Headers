/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelSong;

@interface MPStoreLyricsRequest : NSObject <NSCopying> {

	MPModelSong* _song;

}

@property (nonatomic,retain) MPModelSong * song;              //@synthesize song=_song - In the implementation block
+(BOOL)supportsLyricsForURLBagDictionary:(id)arg1 ;
-(MPModelSong *)song;
-(void)setSong:(MPModelSong *)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
