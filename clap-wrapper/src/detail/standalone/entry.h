#pragma once

#include <clap/clap.h>
#include <clap_proxy.h>
#include <string>

namespace freeaudio::clap_wrapper::standalone
{
std::shared_ptr<Clap::Plugin> mainCreatePlugin(const clap_plugin_entry *entry, const std::string &clapId,
                                               uint32_t clapIndex, int argc, char **argv);
void mainStartAudio();

std::shared_ptr<Clap::Plugin> getMainPlugin();

struct StandaloneHost;
StandaloneHost *getStandaloneHost();

int mainWait();
int mainFinish();
}  // namespace freeaudio::clap_wrapper::standalone