/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUITabularDataRowAction.h>

@protocol SAServerBoundCommand;
@interface SiriTVUITabularDataRowActionShowModalSnippet : SiriTVUITabularDataRowAction {

	id<SAServerBoundCommand> _fetchContentCommand;

}

@property (nonatomic,retain) id<SAServerBoundCommand> fetchContentCommand;              //@synthesize fetchContentCommand=_fetchContentCommand - In the implementation block
-(id<SAServerBoundCommand>)fetchContentCommand;
-(id)initWithFetchContentCommand:(id)arg1 ;
-(void)setFetchContentCommand:(id<SAServerBoundCommand>)arg1 ;
@end

