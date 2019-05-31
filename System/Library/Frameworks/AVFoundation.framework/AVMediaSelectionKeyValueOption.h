/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVMediaSelectionOption.h>

@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {

	id _groupID;
	id _groupMediaType;
	NSString* _optionMediaType;
	NSDictionary* _dictionary;
	AVWeakReference* _weakReferenceToGroup;
	BOOL _displaysNonForcedSubtitles;

}
-(id)_groupMediaType;
-(id)_groupID;
-(id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 ;
-(id)commonMetadata;
-(BOOL)isPlayable;
-(id)mediaType;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)dictionary;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)group;
-(id)locale;
@end
