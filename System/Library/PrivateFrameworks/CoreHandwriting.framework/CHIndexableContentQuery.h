/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHQuery.h>

@class CHRecognitionSessionIndexableContent;

@interface CHIndexableContentQuery : CHQuery {

	CHRecognitionSessionIndexableContent* _indexableContent;

}

@property (setter=_setIndexableContent:,retain) CHRecognitionSessionIndexableContent * indexableContent;              //@synthesize indexableContent=_indexableContent - In the implementation block
-(id)debugName;
-(void)q_updateQueryResult;
-(BOOL)wantsHighFrequencyNotifications;
-(CHRecognitionSessionIndexableContent *)indexableContent;
-(void)_setIndexableContent:(id)arg1 ;
-(void)dealloc;
@end

