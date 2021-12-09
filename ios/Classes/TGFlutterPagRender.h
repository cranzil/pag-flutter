//
//  TGFlutterPageRender.h
//  Tgclub
//
//  Created by 黎敬茂 on 2021/11/25.
//  Copyright © 2021 Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Flutter/Flutter.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^FrameUpdateCallback)(void);

@interface TGFlutterPagRender : NSObject<FlutterTexture>

@property(nonatomic, readonly) CGSize size;

- (instancetype)initWithPagName:(NSString*)pagName progress:(double)initProgress frameUpdateCallback:(FrameUpdateCallback)callback;

- (void)startRender;

- (void)stopRender;

- (void)pauseRender;

- (void)releaseRender;

- (void)setProgress:(double)progress;

- (void)setRepeatCount:(int)repeatCount;

@end

NS_ASSUME_NONNULL_END