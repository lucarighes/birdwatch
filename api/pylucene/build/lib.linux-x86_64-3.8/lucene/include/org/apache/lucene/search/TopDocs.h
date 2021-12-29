#ifndef org_apache_lucene_search_TopDocs_H
#define org_apache_lucene_search_TopDocs_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
        class TotalHits;
        class TopDocs;
        class TopFieldDocs;
        class ScoreDoc;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TopDocs : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a6f4153cadd6aa37,
            mid_merge_62dbf03ecc1d75d5,
            mid_merge_213943b4ee061cdd,
            mid_merge_9f4416664558c25b,
            mid_merge_e72d44517dd1d4ce,
            max_mid
          };

          enum {
            fid_scoreDocs,
            fid_totalHits,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopDocs(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopDocs(const TopDocs& obj) : ::java::lang::Object(obj) {}

          JArray< ::org::apache::lucene::search::ScoreDoc > _get_scoreDocs() const;
          void _set_scoreDocs(const JArray< ::org::apache::lucene::search::ScoreDoc > &) const;
          ::org::apache::lucene::search::TotalHits _get_totalHits() const;
          void _set_totalHits(const ::org::apache::lucene::search::TotalHits &) const;

          TopDocs(const ::org::apache::lucene::search::TotalHits &, const JArray< ::org::apache::lucene::search::ScoreDoc > &);

          static TopDocs merge(jint, const JArray< TopDocs > &);
          static ::org::apache::lucene::search::TopFieldDocs merge(const ::org::apache::lucene::search::Sort &, jint, const JArray< ::org::apache::lucene::search::TopFieldDocs > &);
          static TopDocs merge(jint, jint, const JArray< TopDocs > &, jboolean);
          static ::org::apache::lucene::search::TopFieldDocs merge(const ::org::apache::lucene::search::Sort &, jint, jint, const JArray< ::org::apache::lucene::search::TopFieldDocs > &, jboolean);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(TopDocs);
        extern PyTypeObject *PY_TYPE(TopDocs);

        class t_TopDocs {
        public:
          PyObject_HEAD
          TopDocs object;
          static PyObject *wrap_Object(const TopDocs&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
