<?php

namespace com\grapsas\streamRecorder\urlParser;


class URLListItem {

  private $url;
  private $title;
  
  
  public function __construct( $url, $title ) {
    $this->setUrl( $url );
    $this->title = $title;
  }
  
  public function __toString() {
    return '\''. $this->title. '\': \''. $this->url. '\'';
  }
  
  
  private function setUrl( $url ) {
//     echo $url. PHP_EOL;
    $streamURL = $url;
    if( preg_match( '/\.pls\??.*$/', $url ) === 1 ) {
      $plsFile = file_get_contents( $url );
      preg_match( '/^File1=(.*)/m', $plsFile, $matches );
      $streamURL = $matches[ 1 ];
    }
    $this->url = $streamURL;
  }
  
  
  public function getUrl() {
    return $this->url;
  }
  
  public function getTitle() {
    return $this->title;
  }
}
