// Main file

#include <iostream>

#include "main.ih"
#include <csignal>
#include <cstddef>
#include <asm/types.h>

int main(int argc, char const *argv[])
{
  struct acct_v3
  {
          char            ac_flag;                /* Flags */
          char            ac_version;             /* Always set to ACCT_VERSION */
          __u16           ac_tty;                 /* Control Terminal */
          __u32           ac_exitcode;            /* Exitcode */
          __u32           ac_uid;                 /* Real User ID */
          __u32           ac_gid;                 /* Real Group ID */
          __u32           ac_pid;                 /* Process ID */
          __u32           ac_ppid;                /* Parent Process ID */
          __u32           ac_btime;               /* Process Creation Time */
          float           ac_etime;               /* Elapsed Time */
          comp_t          ac_utime;               /* User Time */
          comp_t          ac_stime;               /* System Time */
          comp_t          ac_mem;                 /* Average Memory Usage */
          comp_t          ac_io;                  /* Chars Transferred */
          comp_t          ac_rw;                  /* Blocks Read or Written */
          comp_t          ac_minflt;              /* Minor Pagefaults */
          comp_t          ac_majflt;              /* Major Pagefaults */
          comp_t          ac_swaps;               /* Number of Swaps */
          char            ac_comm[ACCT_COMM];     /* Command Name */
  };

  // Header h = <csingal>;
  //
  // std::fstream fh;
  // fh.open("pacct.bin", std::fstream::out | std::fstream::binary);
  // fh.write((char*)&h, sizeof(Header));
  // fh.close();
  //
  // fh.open("pacct.bin", std::fstream::in | std::fstream::binary);
  //
  // fh.read((char*)&h.id, sizeof(h.id));
  // fh.read((char*)&h.length, sizeof(h.length));
  // fh.read((char*)&h.count, sizeof(h.count));
  //
  // fh.close();
  //
  // std::cout << h.id << " " << h.length << " " << h.count << std::endl;

// fh.read((char*)&h, sizeof(h));

}
