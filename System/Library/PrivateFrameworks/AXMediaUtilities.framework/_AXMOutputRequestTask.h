/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMTask.h>

@class AXMOutputRequest, AXMOutputRequestDispatchOptions;

@interface _AXMOutputRequestTask : AXMTask {

	AXMOutputRequest* _request;
	AXMOutputRequestDispatchOptions* _options;

}

@property (nonatomic,retain) AXMOutputRequest * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) AXMOutputRequestDispatchOptions * options;              //@synthesize options=_options - In the implementation block
-(void)setRequest:(AXMOutputRequest *)arg1 ;
-(AXMOutputRequestDispatchOptions *)options;
-(AXMOutputRequest *)request;
-(void)setOptions:(AXMOutputRequestDispatchOptions *)arg1 ;
@end

