/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVErrorResolver.h>

@class NSNumber;

@interface MPStorePurchaseErrorResolver : MPAVErrorResolver {

	NSNumber* _storeAccountIdentifier;

}

@property (nonatomic,copy,readonly) NSNumber * storeAccountIdentifier;              //@synthesize storeAccountIdentifier=_storeAccountIdentifier - In the implementation block
-(void)resolveError:(id)arg1 ;
-(id)initWithStoreAccountIdentifier:(id)arg1 ;
-(NSNumber *)storeAccountIdentifier;
@end
